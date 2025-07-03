// POINTER : A variable that stores the memory address of another variable.

// Syntax :   int age = 22;
//            int *ptr = &age;  -> Storing address of age
//            int _age = *ptr;  -> storing value stored in address stored in ptr

// NOTE : * -> Value stored at given address or variable.
//        & -> address of given variable

// Declaring Pointers :  int *ptr
//                       char *ptr
//                       float *ptr
// NOTE : Type of pointer depends on which variable you are pointing to. That is if you are pointing at age and it contains int then pointer type should be int.
// Address of Pointer is an hexdecimal value.
// NOTE : ptr stands for pointer.
// Check Notepad for furthur notes.


#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    // Similarly for float or other datatypes.

    // Printing Address of a : 
    cout<<ptr<<endl;
    cout<<&a<<endl;

    // Address of Pointer ptr :
    cout<<&ptr<<endl;

    // Printing Value at the Given address :
    cout<<*(&a)<<endl;  // Value at address of a
    cout<<*(ptr)<<endl;  // Value stored at address stored in ptr i.e value at address of a
    cout<<*(&ptr)<<endl;  // Value at address of ptr i.e address of a
    
    return 0;
}