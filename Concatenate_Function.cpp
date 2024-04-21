//============================================================================
// Name        : Concatenate_Fucntion.cpp
// Author      : Cody Beggs
// Version     : 1.0.1
// Copyright   : Free Use
// Description : The program below asks for two string inputs and concatenates 
//               them. The program iterates over this three times and prints the 
//               results each time. The program uses std::string and 
//               std::getline() to avoid buffer overflows.
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
       concStrings.push_back(stringOne + stringTwo);
   }
   std::cout << "\nCombined Strings:\n"; // print
   for (const auto& stringConc : concStrings) {
       std::cout << stringConc << std::endl;
   }
   return 0;
}
