// POINTER ARITHMETIC : -> Pointer can be incremented & decremented.
//                      -> We can also subtract one pointer from another.
//                      -> We can also compare 2 pointers.

#include <iostream>
using namespace std;

int main() {

    // Increment & Decrement :

    // Case 1 : Increment & Decrement according to int datatype size (int datatype size is 4 bytes)
    int age = 22;  // int datatype takes 4 bytes memory
    int *ptr = &age;
    cout << "ptr = " << ptr << endl;
    ptr++;  // ptr = ptr + 1 datatype  i.e  ptr + int  i.e  ptr + 4
    cout << "ptr = " << ptr << endl;
    ptr--;  // ptr = ptr - 1 datatype  i.e  ptr - int  i.e  ptr - 4
    cout << "ptr = " << ptr << endl;

    // Case 2 : Increment & Decrement according to float datatype size (float datatype size is 4)
    float price = 20.00;  // float datatype takes 4 bytes memory
    float *qtr = &price;
    cout << "qtr = " << qtr << endl;
    qtr++;  // qtr = qtr + 1 datatype  i.e  qtr + float  i.e  qtr + 4
    cout << "qtr = " << qtr << endl;
    qtr--;  // qtr = qtr - 1 datatype  i.e  qtr - float  i.e  qtr - 4
    cout << "qtr = " << qtr << endl;

    // Case 3 : Increment & Decrement according to char datatype size (char datatype size is 1 byte)
    char star = '*';  // char datatype takes 1 byte memory
    char *str = &star;
    cout << "str = " << static_cast<void*>(str) << endl;
    str++;  // str = str + 1 datatype  i.e  str + char  i.e  str + 1
    cout << "str = " << static_cast<void*>(str) << endl;
    str--;  // str = str - 1 datatype  i.e  str - char  i.e  str - 1
    cout << "str = " << static_cast<void*>(str) << endl;

    // Comparison of 2 Pointers :
    int marks = 98;
    int _marks = 99;
    int *mtr = &marks;
    int *_mtr = &_marks;
    int *__mtr = &marks;
    cout << "Comparison = " << (mtr == _mtr) << endl;   // Output : 0 (False)
    cout << "Comparison = " << (mtr == __mtr) << endl;  // Output : 1 (True)
    cout<<"Comparison = "<< (mtr > _mtr)<<endl;
    cout << "Comparison = " << (mtr < _mtr)<<endl;

    // Subtraction of 2 Pointers :
    int nehal = 19;
    int _nehal = 18;
    int *ntr = &nehal;
    int *_ntr = &nehal;
    int *__ntr = &_nehal;
    cout << "ntr = " << ntr << " , _ntr = " << _ntr << " , Subtraction = " << (ntr - 1) << endl;
    cout << "ntr = " << ntr << " , _ntr = " << _ntr << " , Subtraction = " << (ntr - _ntr) << endl;  // This will provide the number of datatype that can be stored in that space i.e 
    cout << "ntr = " << ntr << " , _ntr = " << __ntr << " , Subtraction = " << (ntr - __ntr) << endl;
    // btw 0th index with address 100 and 3rd index with address 108 (100-108 = 8 = 2 int datatype) 2 int datatype can be stored so answer will be 2
    int *atr1;
    int *atr2 = atr1+2;
    cout<<"atr1 = "<<atr1<<" , atr2 = "<<atr2<<" , Substraction = "<<(atr2-atr1)<<endl;

    // Pointer Arithmetic in Arrays : 
    int arr[] = {1,2,3,4,5};
    cout<<*arr<<endl; // Value at 0 index
    cout<<*(arr+1)<<endl; // Will point to next index.
    // In Address +1 will add +1 datatype to the address of if 0th index have 100 address the 1st index will have 104 address , therfore 8(arr+1) will point at 104.
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;

    // Addition of 2 pointers : 
    int *a;
    cout << "a = " << a << " , Addition = " << (a + 1) << endl;
    // cout << "ntr = " << ntr << " , __ntr = " << __ntr << " , Addition = " << (ntr + __ntr) << endl;  -> Error : Reasn Below

// Pointer addition is not allowed in C++ (or C). You can subtract pointers (if they point to elements of 
// the same array), but you cannot add them.



    return 0;
}

