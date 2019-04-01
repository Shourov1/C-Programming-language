//
//  main.cpp
//  enum classes
//
//  Created by Md. Shariful Alam on 31/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

//C++11 defines a new concept, the enum class (also called a scoped enumeration), which makes enumerations both strongly typed and strongly scoped. To make an enum class, we use the keyword class after the enum keyword. Here’s an example:


#include <iostream>
int main()
{
    enum class Color // "enum class" defines this as a scoped enumeration instead of a standard enumeration
    {
        RED, // RED is inside the scope of Color
        BLUE
    };
    
    enum class Fruit
    {
        BANANA, // BANANA is inside the scope of Fruit
        APPLE
    };
    
    Color color = Color::RED; // note: RED is not directly accessible any more, we have to use Color::RED
    Fruit fruit = Fruit::BANANA; // note: BANANA is not directly accessible any more, we have to use Fruit::BANANA
    
    if (color == fruit) // compile error here, as the compiler doesn't know how to compare different types Color and Fruit
    std::cout << "color and fruit are equal\n";
    else
    std::cout << "color and fruit are not equal\n";
    
    return 0;
}
