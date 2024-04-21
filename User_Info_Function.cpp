//============================================================================
// Name        : InfoFunction.cpp
// Author      : Cody Beggs
// Version     : 1.0.1
// Copyright   : Free Use
// Description : Function to get personal info and print (console, no gui)
//============================================================================
#include <iostream>
#include <string>
using namespace std;
void getUserInformation(string& firstName, string& lastName, string& streetAddress, string& city, string& zipCode) {
   // Getting user input for personal information
   cout << "Enter First Name: ";
   getline(cin, firstName);
   cout << "Enter Last Name: ";
   getline(cin, lastName);
   cout << "Enter Street Address: ";
   getline(cin, streetAddress);
   cout << "Enter City: ";
   getline(cin, city);
   cout << "Enter Zip Code: ";
   getline(cin, zipCode);
}
int main() {
   string firstName, lastName, streetAddress, city, zipCode;
   // Call the function to get user information
   getUserInformation(firstName, lastName, streetAddress, city, zipCode);
   // Printing the information
   cout << "\n\nProfile\n";
   cout << "-----------------------------\n";
   cout << "First Name: " << firstName << endl;
   cout << "Last Name: " << lastName << endl;
   cout << "Street Address: " << streetAddress << endl;
   cout << "City: " << city << endl;
   cout << "Zip Code: " << zipCode << endl;
   return 0;
}
