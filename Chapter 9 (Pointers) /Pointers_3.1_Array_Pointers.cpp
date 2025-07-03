// ARRAY POINTERS : 

// The variables of arrays arr[]is a pointer in itself. It always points at the 0th indecx of pointer.

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    cout<<arr<<endl; //Prints Address of 0th index of the Array

    cout<<*arr<<endl; // Prints The value at 0th index of the Array

    return 0;
}