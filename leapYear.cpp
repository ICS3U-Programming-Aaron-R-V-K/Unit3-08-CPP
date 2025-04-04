// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 04, 2025
// Determines if the year is a leap year or not using if-nested

#include <iostream>
#include <string>

int main() {
    std::string yearStr;
    int yearInt;

    // Initial explanation to the user
    std::cout << "\nDetermines if the year is a leap year."
    << std::endl;

    // Prompt user for input
    std::cout << "\nEnter a year: ";
    std::cin >> yearStr;

    try {
        // Try catch for converting the string to an integer
        yearInt = std::stoi(yearStr);

        // Check if the year is positive
        if (yearInt > 0) {
            // Nested if statements
            // If year is divisible by four
            if (yearInt % 4 == 0) {
                // If year is divisible by 100
                if (yearInt % 100 == 0) {
                    // If year is divisible by 400
                    if (yearInt % 400 == 0) {
                        std::cout << yearInt << ", is a leap year."
                        << std::endl;
                    } else {
                        std::cout << yearInt << ", is not a leap year."
                        << std::endl;
                    }
                } else {
                    std::cout << yearInt << ", is a leap year." << std::endl;
                }
            } else {
                std::cout << yearInt << ", is not a leap year." << std::endl;
            }
        } else {
            std::cout << "Enter a positive number." << std::endl;
        }
    } catch (...) {
        // Invalid input catch
        std::cout << yearStr << ", is an invalid input." << std::endl;
    }

    // Final message for every answer
    std::cout << "Thanks for playing" << std::endl;

    return 0;
}
