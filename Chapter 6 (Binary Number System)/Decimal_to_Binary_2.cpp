// DECIMAL TO BINARY CONVERSION :

// Method 2 :


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Decimal Number : ";
    cin >> n;
    int sum = 0;
    int i = 0;

    while (n > 0) {
        int r = n % 2;
        sum += r * pow(10, i);
        n = n / 2;
        i++;
    }

    cout << "Binary Number : " << sum << endl;

    return 0;
}