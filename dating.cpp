// Copyright (c) Year Fred All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Tell the user if he can date my grandchild or not.
#include<iostream>
#include <string>

int main() {
    std::string number_str;
    int number_int;

    // Ask for the age of the user
    std::cout << "Enter your age between 0 and 120\n";
    std::cin >> number_str;

    // Verify if the age is an integer
    try {
        number_int = std::stoi(number_str);

        // Check if the age is greater than 25 and less than 40
        if (number_int > 25 && number_int <40) {
            std::cout << "You can date my grandchild";
        } else if (number_int < 0) {
            std::cout << "Please enter a valid age";
        } else {
            std::cout << "You are too old to date my grandchild";
        }
    } catch (std::invalid_argument) {
        std::cout << number_str << " is not an integer";
    }

    // Not matter what happens, at least thank the user for using the code
    std::cout << "\nThanks for playing\n";
}
