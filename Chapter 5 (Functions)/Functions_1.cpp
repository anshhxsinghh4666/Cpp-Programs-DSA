// FUNCTIONS : Block of code that performs particular task.
//             It can be used multiple times
//             Increase code reusability

// Syntax :      void printHello();  -> Function Prototype or Declaration.

//               void printHello() {}
//                   printf("Hello")  -> Function Definition
//               }

//               int main () {
//                   printHello();  -> Function call
//                   return 0;
//               }

#include <iostream>
using namespace std;

// Function Declaration/Prototype :  :
void printHello();      // 1st Function
void printGoodbye();    // 2nd Function

// Function Call :
int main() {
    
    // 1st Function Call
    printHello();    // 1st Call
    printHello();    // 2nd Call
    printHello();    // 3rd Call

    // 2nd Function Call
    printGoodbye();  // 1st Call
    printGoodbye();  // 2nd Call

    return 0;
}

// Function Definition :
void printHello() {  // 1st Function Declaration
    cout << "Hello World" << endl; // Printing "Hello World" on the console.
    cout << "My name is Ansh" << endl;
}

void printGoodbye() { // 2nd Function Declaration
    cout << "Goodbye World" << endl; // Printing "Goodbye World" on the console.
}


// Check file Function_2.cpp for more info on Functions : -> Functions Properties
//                                                        -> Functions Types
//                                                        -> Passing Arguments