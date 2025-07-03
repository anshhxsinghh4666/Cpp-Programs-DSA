// BINARY TO DECIMAL CONVERSION :


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Binary Number : ";
    cin >> n;

    int sum = 0;
    int i = 0;

    while (n > 0) {
        int r = n % 10;
        sum += r * pow(2, i);
        n = n / 10;
        i++;
    }

    cout << "Decimal Number : " << sum << endl;

    return 0;
}
