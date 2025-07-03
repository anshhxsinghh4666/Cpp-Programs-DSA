// DECIMAL TO BINARY CONVERSION :

// Method 1 : Using Array (Ansh Method)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Decimal Number: ";
    cin >> n;
    int bin[32];
    int i = 0;

    while (n > 0) {
        int r = n % 2;
        bin[i] = r;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << bin[j];
    }

    return 0; 
}
