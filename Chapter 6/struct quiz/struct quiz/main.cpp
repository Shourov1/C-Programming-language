//
//  main.cpp
//  struct quiz
//
//  Created by Md. Shariful Alam on 01/04/2019.
//  Copyright © 2019 Md. Shariful Alam. All rights reserved.
//

#include <iostream>

// 1) You are running a website, and you are trying to keep track of how much money you make per day from advertising. Declare an advertising struct that keeps track of how many ads you’ve shown to readers, what percentage of ads were clicked on by users, and how much you earned on average from each ad that was clicked. Read in values for each of these fields from the user. Pass the advertising struct to a function that prints each of the values, and then calculates how much you made for that day (multiply all 3 fields together).

// 2) Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member. Declare 2 fraction variables and read them in from the user. Write a function called multiply that takes both fractions, multiplies them together, and prints the result out as a decimal number. You do not need to reduce the fraction to its lowest terms.

#include <iostream>

// First we need to define our Advertising struct
struct Advertising
{
    int adsShown;
    double clickThroughRatePercentage;
    double averageEarningsPerClick;
};

Advertising getAdvertising()
{
    Advertising temp;
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.adsShown;
    std::cout << "What percentage of users clicked on the ads? ";
    std::cin >> temp.clickThroughRatePercentage;
    std::cout << "What was the average earnings per click? ";
    std::cin >> temp.averageEarningsPerClick;
    return temp;
}

void printAdvertising(Advertising ad)
{
    std::cout << "Number of ads shown: " << ad.adsShown << '\n';
    std::cout << "Click through rate: " << ad.clickThroughRatePercentage << '\n';
    std::cout << "Average earnings per click: $" << ad.averageEarningsPerClick << '\n';
    
    // The following line is split up to reduce the length
    // We need to divide ad.clickThroughRatePercentage by 100 because it's a percent of 100, not a multiplier
    std::cout << "Total Earnings: $" <<
    (ad.adsShown * ad.clickThroughRatePercentage / 100 * ad.averageEarningsPerClick) << '\n';
}

int main()
{
    // Declare an Advertising struct variable
    Advertising ad = getAdvertising();
    printAdvertising(ad);
    
    return 0;
}



#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction getFraction()
{
    Fraction temp;
    std::cout << "Enter a value for numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> temp.denominator;
    std::cout << "\n";
    return temp;
}

void multiply(Fraction f1, Fraction f2)
{
    // Don't forget the static cast, otherwise the compiler will do integer division!
    std::cout << static_cast<float>(f1.numerator * f2.numerator) /
    (f1.denominator* f2.denominator);
}

int main()
{
    // Allocate our first fraction
    Fraction f1 = getFraction();
    Fraction f2 = getFraction();
    
    multiply(f1, f2);
    
    return 0;
}
