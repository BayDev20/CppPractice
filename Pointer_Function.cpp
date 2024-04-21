//====================================================================================
// Name        : Pointer_Function.cpp
// Author      : Cody Beggs
// Version     :1.0.1
// Copyright   : Free Use
// Description : Gets 3 numbers from a user and assigns them to pointers a, b, and c. 
//====================================================================================
#include <iostream>
#include <limits> 
int main() {
   int a, b, c;
   std::cout << "Input 3 integers (press enter after each entry): "; // Prompts user for three integers
   while (!(std::cin >> a >> b >> c)) { //while statement cycles through a, b, c
       std::cout << "Invalid! Please enter three integers: ";
       std::cin.clear(); // Clears the error
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignores
   }
   // Assign memory via new
   int *pa = new int(a);  // Pointer a
   int *pb = new int(b); // Pointer b
   int *pc = new int(c); // Pointer c

   std::cout << "You Entered: " << a << ", " << b << ", " << c << std::endl;
   std::cout << "Pointers: " << "a: " << *pa << ", " << "b: " << *pb << ", " << "c: " << *pc << std::endl;

   // Deleting memory via delete
   delete pa;
   delete pb;
   delete pc;
   return 0;
}
