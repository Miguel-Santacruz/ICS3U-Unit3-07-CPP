// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program is a compound boolean expression program

#include <iostream>
#include <string>

int main() {
    // This function checks the age
    int age;
    std::string ageAsString;

    // Input
    std::cout << "Enter your age please: ";
    std::cin >> ageAsString;

    // Process & Output
    try {
        age = std::stoi(ageAsString);
        if (age > 25 && age < 40) {
            std::cout << "You have an acceptable age :D" << std::endl;
        } else {
            std::cout << "You are NOT an acceptable age. Get out >:("
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << ageAsString << " is not an age. Are you okay?"
        << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}
