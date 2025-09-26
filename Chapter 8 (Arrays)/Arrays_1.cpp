// ARRAYS : Collection of similar data types stored at contiguous memory locations.

// NOTE : We can't store variables with different datatypes.

// Syntax : type NameOfArray[Size of array]
//          int marks[3];
//          char name[8];
//          float price[4];

// Input Syntax : cin >> marks[0];
// Output Syntax : cout << marks[0];

// Initialization of Array Syntax : int marks[] = {97, 98, 89};  -> No need to write the size in this syntax.
//                                  int marks[3] = {97, 98, 89}  -> Write if you want to.
// We can use the above syntax if we want to give input ourselves rather than taking input from the user.

// Zero Based Indexing (Check Notepad for details)

/*
NOTE : In Cpp we can't enter a variable in size of array like arr[n] because In C++, the size of a static array must be a compile-time constant. 
This means you cannot use a variable whose value is determined at runtime to define the size of a traditional C-style array.
BUT
In C you can do that and these arrays are called Variable Length Arrays.
*/

#include <iostream>
using namespace std;

int main() {
    // Storing Marks of 3 Students without using Arrays
    int marks1 = 98;
    int marks2 = 91;
    int marks3 = 93;

    cout << "Marks 1 = " << marks1 << endl;
    cout << "Marks 2 = " << marks2 << endl;
    cout << "Marks 3 = " << marks3 << endl;

    // Now Here we are to access marks of 3 students we require 3 different variables.
    // To Avoid that we can use Arrays.  Check Below:

    // Storing Marks of 3 Students with using Arrays
    int marks[3] = {98, 91, 93};  // Arrays

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    // Input & Output
    int marks_[3];

    cout << "Physics = ";
    cin >> marks_[0];

    cout << "Chemistry = ";
    cin >> marks_[1];

    cout << "Maths = ";
    cin >> marks_[2];

    cout << "Physics = " << marks_[0] << " , Chemistry = " << marks_[1] << " , Maths = " << marks_[2] << endl;

    // Here we can access marks of 3 students from a single variable 'marks'
    return 0;
}