// Copyright (c) 2019 Joseph Palermo All rights reserved.

// Created by: Joseph Palermo
// Created on: November 2019
// This program calculates all numbers of n>0, in 1/n

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates all numbers of n>0, in 1/n

    // input & variables
    float posInt;
    std::string posintString;
    float loopCounter;
    float fractionSum;
    float sumAll;

    std::cout << "Enter value n: ";
    std::cin >> posintString;


    // process & output
    try {
        // code to convert string "a" to number "a"
        posInt = std::stof(posintString);

        while (loopCounter < posInt) {
            loopCounter = loopCounter + posInt;
            fractionSum = 1 / loopCounter;
            std::cout << "1 / " << std::fixed << std::setprecision(1) \
            << loopCounter << std::setfill('0') << " = " << std::fixed \
            << std::setprecision(2) << fractionSum << std::setfill('0') << "\n";
            loopCounter = loopCounter - 1;
            sumAll = fractionSum;
            if (posInt > 0) {
                posInt = posInt - posInt;
            } else {
                std::cout << "Please insert a positive integer.";
            } continue;
        }
        while (loopCounter > posInt) {
            loopCounter = loopCounter + posInt;
            fractionSum = 1 / loopCounter;
            std::cout << "1 / " << std::fixed << std::setprecision(1) \
            << loopCounter << std::setfill('0') << " = " << std::fixed \
            << std::setprecision(2) << fractionSum << std::setfill('0') << "\n";
            loopCounter = loopCounter - 1;
            sumAll = sumAll + fractionSum;
            if (posInt == 0) {
                continue;
            } else {
                std::cout << "Please insert an positive integer.";
            }
        }
        while (true) {
            std::cout << "\n";
            std::cout << "The sum of all numbers is: " \
            << std::fixed << std::setprecision(2) \
            << sumAll << std::setfill('0');
            std::cout << " ";
            break;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n";
        std::cout << "Please insert a positive integer.";
    }
}
