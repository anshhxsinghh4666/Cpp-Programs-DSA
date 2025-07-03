// Calculate N Factorial

#include <iostream>
using namespace std;

// Function Decalaration :
int factorial(int n);

// Function Call :
int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << "Factorial = " << factorial(n) << endl;

    return 0;
}

// Function Definition :
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}