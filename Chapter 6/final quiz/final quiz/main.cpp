//
//  main.cpp
//  final quiz
//
//  Created by Md. Shariful Alam on 01/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

//1) In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. Declare a struct that represents your monster. The monster should have a type that can be one of the following: an ogre, a dragon, an orc, a giant spider, or a slime. If you’re using C++11, use an enum class for this. If you’re using an older compiler, use an enumeration for this.

//Each individual monster should also have a name (use a std::string), as well as an amount of health that represents how much damage they can take before they die. Write a function named printMonster() that prints out all of the struct’s members. Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().


#include <iostream>
#include <string>

// Define our different monster types as an enum
enum class MonsterType
{
    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

// Our monster struct represents a single monster
struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};

// Return the name of the monster's type as a string
// Since this could be used elsewhere, it's better to make this its own function
std::string getMonsterTypeString(Monster monster)
{
    if (monster.type == MonsterType::OGRE)
    return "Ogre";
    if (monster.type == MonsterType::DRAGON)
    return "Dragon";
    if (monster.type == MonsterType::ORC)
    return "Orc";
    if (monster.type == MonsterType::GIANT_SPIDER)
    return "Giant Spider";
    if (monster.type == MonsterType::SLIME)
    return "Slime";
    
    return "Unknown";
}

// Print our monster's stats
void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeString(monster) <<
    " is named " << monster.name <<
    " and has " << monster.health << " health.\n";
}

int main()
{
    Monster ogre = { MonsterType::OGRE, "Torg", 145 };
    Monster slime = { MonsterType::SLIME, "Blurp", 23 };
    
    printMonster(ogre);
    printMonster(slime);
    
    return 0;
}
