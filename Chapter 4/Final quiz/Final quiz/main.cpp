//
//  main.cpp
//  Final quiz
//
//  Created by Md. Shariful Alam on 25/03/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>
#include "constants.h"

// gets height from user and returns it
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateHeight(double towerHeight, int seconds)
{
    double distanceFallen = (myConstants::gravity * (seconds * seconds)) / 2;
    double currentHeight = towerHeight - distanceFallen;
    
    return currentHeight;
}

void printHeight(double height, int seconds)
{
    if (height> 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}


void calculateandPrintHeight(double towerHeight, int seconds)
{
    double height = calculateHeight(towerHeight, seconds);
    printHeight(height,seconds);
}

int main()
{
    const double towerHeight = getTowerHeight();
    
    calculateandPrintHeight(towerHeight, 0);
    calculateandPrintHeight(towerHeight, 1);
    calculateandPrintHeight(towerHeight, 2);
    calculateandPrintHeight(towerHeight, 3);
    calculateandPrintHeight(towerHeight, 4);
    calculateandPrintHeight(towerHeight, 5);
    
    return 0;
    
}
