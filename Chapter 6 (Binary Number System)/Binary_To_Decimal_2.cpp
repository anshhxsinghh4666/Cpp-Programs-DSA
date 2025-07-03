#include <iostream>
using namespace std;

// Function Decalaration :
int binToDec(int n);

// Function Call :
int main() {
    int n;
    cout << "Enter Binary Number : ";
    cin >> n;
    cout << "Decimal Number : " << binToDec(n) << endl;
    return 0;
}

// Function Definition :
int binToDec(int n) {
    int sum = 0;
    int i = 0;

    while (n > 0) {
        int r;
        r = n % 10;  // r = remainder
        sum += r * pow(2, i);
        n = n / 10;  // n = quotient
        i++;
    }
    return sum;
}