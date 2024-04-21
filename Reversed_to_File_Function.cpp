//============================================================================
// Name        : reversed.cpp
// Author      : Cody Beggs
// Version     :
// Copyright   : Your copyright notice
// Description : Append a file and create a reverse copy of the file.
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Forward declarations for utility functions
void appendToFile(const std::string& filePath, const std::string& data);
void reverseContentAndSave(const std::string& inputFilePath, const std::string& outputFilePath);

int main() {
    std::string userInput;
    std::string filePath = "CSC450_CT5_mod5.txt";
    std::string reverseFilePath = "CSC450-mod5-reverse.txt";

    // Prompt the user for input to append to a file
    std::cout << "Please enter what you want to store in CSC450_CT5_mod5.txt: ";
    std::getline(std::cin, userInput);  // Read input from user

    // Append the input received from the user to the specified file
    appendToFile(filePath, userInput);

    // Reverse the content of the original file and save it to a new file
    reverseContentAndSave(filePath, reverseFilePath);

    // Notify the user that the operations were successful
    std::cout << "File appended. Reversed file generated." << std::endl;
    return 0;
}

// Appends the given data to the file specified by filePath
void appendToFile(const std::string& filePath, const std::string& data) {
    std::ofstream outFile(filePath, std::ios::app); // Open file in append mode
    if (!outFile.is_open()) {
        std::cerr << "Failed to open " << filePath << " for writing. Check file path and permissions." << std::endl;
        exit(1);  // Exit if the file cannot be opened
    }
    outFile << data << std::endl;  // Write data with a newline
    outFile.close();  // Always close the file handle after writing to release system resources
}

// Reverses the content of the file at inputFilePath and saves the result to outputFilePath
void reverseContentAndSave(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream inFile(inputFilePath);
    if (!inFile.is_open()) {
        std::cerr << "Failed to open " << inputFilePath << " for reading. Check file path and permissions." << std::endl;
        exit(1);  // Exit if the file cannot be opened
    }

    // Read all content from the file into a string
    std::string content((std::istreambuf_iterator<char>(inFile)),
                        std::istreambuf_iterator<char>());
    inFile.close();  // Close the file after reading

    std::reverse(content.begin(), content.end());  // Reverse the string content

    // Write the reversed content to a new file
    std::ofstream reverseFile(outputFilePath);
    if (!reverseFile.is_open()) {
        std::cerr << "Failed to open " << outputFilePath << " for writing. Check file path and permissions." << std::endl;
        exit(1);
    }

    reverseFile << content;  // Write the reversed content
    reverseFile.close();  // Close the file to ensure all changes are saved
}
