// POINTER TO POINTER : A variable that stores the memory address of another pointer.

// Synatx :   int **pptr;   
//            char **pptr;   
//            float **pptr;   


#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    
    int** pptr = &ptr; //Pointer to pointer

    // Address of a :
    cout<<ptr<<endl;
    cout<<endl;

    // Printing Address of Pointer ptr : 
    cout<<&ptr<<endl;
    cout<<pptr<<endl;
    cout<<endl;

    // Printing Values at the Given Address :
    cout<<*(pptr)<<endl;  // Address of a
    cout<<**(pptr)<<endl;  // Value at Address of a

    // NULL POINTER :
    int *ptrNull = NULL;
    cout<<ptrNull<<endl;

    return 0;
}