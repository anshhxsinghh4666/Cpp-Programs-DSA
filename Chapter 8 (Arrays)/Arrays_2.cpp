// Array is a pointer which points at index 0 of the array.

// Syntax : int *ptr = &arr[0];
//          OR
//          int *ptr = arr;

// Traverse An Array : Accessing each and every element of the array.

#include <iostream>
using namespace std;

// Take Input of 5 aadhar numbers and store them in an array, then access each element and print them.

int main() {
    int _aadhar[5];
    int marks[5];

    // Input :
    cout << "Input Method 1 : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "index " << i << " : ";
        cin >> _aadhar[i];
    }
    // OR
    cout << "Input Method 2 : " << endl;
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        cout << "index " << i << " : ";
        cin >> marks[i];
    }

    // Output :
    cout << "Output Method 1 : " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value at index " << i << " : " << _aadhar[i] << endl;
    }
    // OR
    cout << "Output Method 2 : " << endl;
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        cout << "Value at index " << i << " : " << marks[i] << endl;
    }

    return 0;
}