//
//  main.cpp
//  struct
//
//  Created by Md. Shariful Alam on 01/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

//A big advantage of using structs over individual variables is that we can pass the entire struct to a function that needs to work with the members:

#include <iostream>

struct Employee
{
    short id;
    int age;
    double wage;
};

void printInformation(Employee employee)
{
    std::cout << "ID:   " << employee.id << "\n";
    std::cout << "Age:  " << employee.age << "\n";
    std::cout << "Wage: " << employee.wage << "\n";
}

int main()
{
    Employee joe = { 14, 32, 24.15 };
    Employee frank = { 15, 28, 18.27 };
    
    // Print Joe's information
    printInformation(joe);
    
    std::cout << "\n";
    
    // Print Frank's information
    printInformation(frank);
    
    return 0;
}


//A function can also return a struct, which is one of the few ways to have a function return multiple variables.

#include <iostream>

struct Point3d
{
    double x;
    double y;
    double z;
};

Point3d getZeroPoint()
{
    Point3d temp = { 0.0, 0.0, 0.0 };
    return temp;
}

int main()
{
    Point3d zero = getZeroPoint();
    
    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
    std::cout << "The point is zero\n";
    else
    std::cout << "The point is not zero\n";
    
    return 0;
}

//You can use nested initializer lists for nested structs:

struct Employee
{
    short id;
    int age;
    float wage;
};

struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};

Company myCompany = {{ 1, 42, 60000.0f }, 5 };

//Structs are very important in C++, as understanding structs is the first major step towards object-oriented programming! Later on in these tutorials, you’ll learn about another aggregate data type called a class, which is built on top of structs. Understanding structs well will help make the transition to classes that much easier.

//The structs introduced in this lesson are sometimes called plain old data structs (or POD structs) since the members are all data (variable) members. In the future (when we discuss classes) we’ll talk about other kinds of members.
