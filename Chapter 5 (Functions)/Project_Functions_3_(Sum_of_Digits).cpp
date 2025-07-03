// Calculate the sum of digits of a number.


#include <iostream>
using namespace std;

// Function Decalaration :
int sumofdigits(int n);

// Function Call :
int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Sum of Digits : " << sumofdigits(n) << endl;

    return 0;
}

// Function Definition:
int sumofdigits(int n) {
    int sum = 0;
    while (n > 0) {
        int r = n % 10;
        sum += r;
        n = n / 10;
    }
    return sum;
}