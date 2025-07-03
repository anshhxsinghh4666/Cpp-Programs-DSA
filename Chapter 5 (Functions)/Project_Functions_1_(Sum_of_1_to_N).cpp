// WAF to find the sum of 1 to N.

#include <iostream>
using namespace std;

// Function Decalaration :
int sum(int n);

// Function Call :
int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    cout << "Sum of N Numbers : " << sum(n) << endl;
    cout << "Sum of 10 Numbers : " << sum(10) << endl;

    return 0;
}

// Function Definition :
int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}