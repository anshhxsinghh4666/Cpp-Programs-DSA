// Function Properties :
//  -> Execution always starts from int main().
//  -> A Function gets called directly or indirectly from int main().
//  -> There can be multiple functions in a program.

// Type OF Functions :
//  -> Library Functions : Special Functions inbuilt in C++. cin, cout, etc.
//  -> User-Defined Functions : Declared & defined by programmer.

// Passing Arguments : Functions can take value (Parameter) & give some value (Return Value)
//                         ->  void printHello();  > No Argument Passed
//                         ->  void printHello(int n);  > n Argument passed
//                         ->  int printHello(int a, int b);  > 2 arguments a & b passed

// NOTE : void or int in function means the type of value they will return. Since printHello() will print "Hello" but do not return any value so we used void.

#include <iostream>
using namespace std;

// Function Declaration :
int sum(int a, int b);
// NOTE : We used int because function sum(int a, int b) will take 2 values a & b and make a new value sum=a+b and return it. Since it is returning integer type value so we used int.

// Function Call :
int main() {
    // NOTE : With main() we use int because it returns 0;
    int a, b;
    cout << "Enter First number:";
    cin >> a;
    cout << "Enter Second number:";
    cin >> b;

    int s = sum(a, b);  // sum Function Call
    cout << "sum is " << s;
    return 0;
}

// The value of a and b taken by user then put in sum(a,b). This a & b value is copy and pasted in x & y.
// Then x+y is returned to variable s

// Function Definition :
int sum(int x, int y) {  // we can also use int sum(int a, int b)
    return x + y;  // Returns to the calling Function
}
/*OR
int sum(int x, int y){
    int s = x+y;
    return s;
} 
*/


// NOTE : It is not compulsory to keep the variables name same between Function Declaration, call or definition.
// The use of that variable is only inside the block of a particular function. We prefer to use same variables to make the code more readable and make our work easy.


// Arguments V/S Parameters :  (IMPORTANT!)

// Arguments :
// -> Values that are passed in function call (Where dataType is not written)
// -> Used to send value
// -> Actual Parameter

// Parameter :
// -> Values in function declaration & definition (Where DataType is written)
// -> Used to receive value
// -> Formal Parameter


// NOTE : Functions can only return one value at a time.