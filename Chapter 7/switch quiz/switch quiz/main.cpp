//
//  main.cpp
//  switch quiz
//
//  Created by Md. Shariful Alam on 01/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

//1) Write a function called calculate() that takes two integers and a char representing one of the following mathematical operations: +, -, *, /, or % (modulus). Use a switch statement to perform the appropriate mathematical operation on the integers, and return the result. If an invalid operator is passed into the function, the function should print an error. For the division operator, do an integer division.

#include <iostream>

int calculate(int x, int y, char op)
{
    switch(op)
    {
        case '+':
            return x+y;
        case '-':
            return x-y;
        case '*':
            return x*y;
        case '%':
            return x%y;
        default:
            std::cout << "Error" << '\n';
            return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{0};
    std::cin >> x;
    
    std::cout << "Enter another integer: ";
    int y{0};
    std::cin >> y;
    
    std::cout << "Enter an operation: ";
    char op;
    std::cin >> op;
    
    std::cout << calculate(x,y,op) << '\n';
}


//2) Define an enum (or enum class, if using a C++11 capable compiler) named Animal that contains the following animals: pig, chicken, goat, cat, dog, ostrich. Write a function named getAnimalName() that takes an Animal parameter and uses a switch statement to return the name for that animal as a std::string. Write another function named printNumberOfLegs() that uses a switch statement to print the number of legs each animal walks on. Make sure both functions have a default case that prints an error message. Call printNumberOfLegs() from main() with a cat and a chicken. Your output should look like this:

//      A cat has 4 legs.
//      A chicken has 2 legs.


#include <iostream>
#include <string>

enum Animal
{
    Animal_Pig,
    Animal_Chicken,
    Animal_Goat,
    Animal_Cat,
    Animal_Dog,
    Animal_Ostrich
};

std::string getAnimalName(Animal animal)
{
    switch(animal)
    {
        case Animal_Pig:
            return "PIG";
        case Animal_Chicken:
            return "CHICKEN";
        case Animal_Goat:
            return "GOAT";
        case Animal_Cat:
            return "CAT";
        case Animal_Dog:
            return "DOG";
        case Animal_Ostrich:
            return "OSTRICH";
        default:
            std::cout << "???";
            return 0;
            
    }
}

void printNumberOfLegs(Animal animal)
{
    std::cout << "A " << getAnimalName(animal) << " has ";
    switch(animal)
    {
        case Animal_Chicken:
        case Animal_Ostrich:
            std::cout << "2";
            break;
            
        case Animal_Pig:
        case Animal_Goat:
        case Animal_Cat:
        case Animal_Dog:
            std::cout << "4";
            break;
            
        default:
            std::cout << "???";
            break;
            
    }
    std::cout << " legs.\n";
}

int main()
{
    printNumberOfLegs(Animal_Dog);
    printNumberOfLegs(Animal_Cat);
    
}
