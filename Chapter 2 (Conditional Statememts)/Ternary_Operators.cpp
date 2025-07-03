// Ternary Operators : Used a an if-else statement. Generally used to replace 
// simple if else statement.

// Syntax : Condition ? statement 1(For condition True) : statement 2(For condition False)


#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter Number : ";
    cin>>n;
    cout << (n>=0 ? "Positive" : "Negative") << endl;
    return 0;
}