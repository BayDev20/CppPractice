//============================================================================
// Name        : CTtwo.cpp
// Author      : Cody Beggs
// Version     : 1.0.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> concStrings;

    for (int i = 0; i < 3; ++i) { // Iterate 3 times
        std::string stringOne, stringTwo;

        std::cout << "Input string 1: "; // First input
        std::getline(std::cin, stringOne);

        std::cout << "Input string 2: "; // Second input
        std::getline(std::cin, stringTwo);

        concatenatedStrings.push_back(stringOne + stringTwo);
    }

    std::cout << "\nCombined Strings:\n"; // print
    for (const auto& stringConc : concStrings) {
        std::cout << strongConc << std::endl;
    }

    return 0;
}